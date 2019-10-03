//
//  WKWebView+BrowsingHack.h
//  RCTWKWebView
//
//  Created by Nguyen Duc Binh on 03/10/19.
//

#import <WebKit/WebKit.h>

@interface WKWebView (BrowserHack)

-(NSDictionary*)respondToTapAndHoldAtLocation:(CGPoint)location;
- (NSString *)stringByEvaluatingJavaScriptFromString:(NSString *)script;

@end
