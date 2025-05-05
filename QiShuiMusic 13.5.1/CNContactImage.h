@interface CNContactImage : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSData imageData;
@property (nonatomic) NSDate lastUsedDate;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) q source;
@property (nonatomic) NSString sourceIdentifier;
@property (nonatomic) NSString variant;
@property (nonatomic) NSData poseConfigurationData;
@property (nonatomic) NSString displayString;
- (id)displayString;
- (id)imageData;
- (id)sourceIdentifier;
- (void)setVariant:;
- (id)identifier;
- (id)cropRect;
- (id)variant;
- (void)setDisplayString:;
- (void).cxx_destruct;
- (long long)source;
- (id)lastUsedDate;
- (void)setSource:;
- (void)setSourceIdentifier:;
- (id)poseConfigurationData;
- (id)copyWithNewImageData:;
- (void)setPoseConfigurationData:;
- (id)initWithImageData:cropRect:lastUsedDate:;
- (id)initWithIdentifier:imageData:cropRect:lastUsedDate:;
@end
