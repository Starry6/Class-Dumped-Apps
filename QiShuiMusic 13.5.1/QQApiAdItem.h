@interface QQApiAdItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString description;
@property (nonatomic) NSData imageData;
@property (nonatomic) NSURL target;
- (void)setImageData:;
- (id)imageData;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setTarget:;
- (void)encodeWithCoder:;
- (id)title;
- (id)target;
- (id)description;
- (void)setDescription:;
@end
