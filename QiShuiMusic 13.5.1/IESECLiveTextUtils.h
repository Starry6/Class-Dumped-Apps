@interface IESECLiveTextUtils : NSObject
+ (id)attributedStringToFit:maxSize:;
+ (id)labelToFit:;
+ (id)textContentToFit:numberOfLines:font:maxSize:;
@end
