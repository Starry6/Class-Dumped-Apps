@interface WXAppExtendObject : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString extInfo;
@property (nonatomic) NSData fileData;
- (id)extInfo;
- (void)setExtInfo:;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)fileData;
- (void)setFileData:;
+ (id)object;
@end
