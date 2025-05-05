@interface CNSyncImageResult : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSData imageData;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) NSData imageHash;
- (id)imageData;
- (id)cropRect;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)imageHash;
- (id)initWithType:imageData:cropRect:imageHash:;
@end
