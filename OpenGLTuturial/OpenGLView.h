//
//  OpenGLView.h
//  OpenGLTuturial
//
//  Created by camacholaverde on 2/20/15.
//  Copyright (c) 2015 gibicgroup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface OpenGLView : UIView{
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
}

@end
