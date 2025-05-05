@interface WXWeWorkObject : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSInteger subType;
@property (nonatomic) NSString extInfo;
- (id)extInfo;
- (void)setExtInfo:;
- (id)data;
- (void).cxx_destruct;
- (int)subType;
- (void)setSubType:;
- (void)setData:;
+ (id)object;
@end
