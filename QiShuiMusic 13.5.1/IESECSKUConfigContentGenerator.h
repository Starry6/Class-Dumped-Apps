@interface IESECSKUConfigContentGenerator : NSObject
+ (id)generateViewWithViewConfigItem:;
+ (id)generateAttributedStringWithText:textFont:textColor:;
+ (id)generateViewWithConfigItem:;
+ (id)generateViewWithContents:height:;
@end
