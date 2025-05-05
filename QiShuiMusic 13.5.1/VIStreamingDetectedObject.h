@interface VIStreamingDetectedObject : NSObject
@property (nonatomic) NSUUID objectUUID;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingBox;
@property (nonatomic) NSString domainKey;
@property (nonatomic) NSString glyphName;
@property (nonatomic) NSString displayLabel;
- (id)displayLabel;
- (id)domainKey;
- (void).cxx_destruct;
- (id)glyphName;
- (id)objectUUID;
- (id)normalizedBoundingBox;
- (id)initWithObjectUUID:normalizedBoundingBox:domainKey:glyphName:displayLabel:;
@end
