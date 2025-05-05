@interface WXFileObject : NSObject
@property (nonatomic) NSString fileExtension;
@property (nonatomic) NSData fileData;
- (void).cxx_destruct;
- (id)fileExtension;
- (void)setFileExtension:;
- (id)fileData;
- (void)setFileData:;
+ (id)object;
@end
