//
//  MyCustomView.h
//  RedSquare
//
//  Created by AK on 2/22/08.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MyCustomView : UIView {
	
	CGFloat                    squareSize;
	CGFloat                    rotation;
	CGColorRef                 aColor;
	CGFloat					   centerx;
	CGFloat					   centery;
	CGPoint					   startTouchPosition;
	BOOL                       twoFingers;
	
	IBOutlet UILabel           *xField;
	IBOutlet UILabel           *yField;
	IBOutlet UILabel           *zField;
}

@end
