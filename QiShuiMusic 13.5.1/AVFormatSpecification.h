@interface AVFormatSpecification : NSObject
- (void)dealloc;
- (id)outputSettings;
- (id)initWithOutputSettings:sourceFormatDescription:;
- (id)sourceFormatDescription;
+ (id)formatSpecificationWithOutputSettings:sourceFormatDescription:;
@end
