@interface ADImageSupportedSize : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) Q layout;
- (unsigned long long)layout;
- (id)size;
+ (id)createWithSize:andLayout:;
@end
