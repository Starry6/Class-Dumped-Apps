@interface CVMLFaceprint_LegacySupportDoNotChange : NSObject
@property (nonatomic) NSData faceprint;
@property (nonatomic) NSString key;
@property (nonatomic) I platform;
@property (nonatomic) I profile;
@property (nonatomic) NSString faceprintInputPath;
- (void)setPlatform:;
- (id)key;
- (void)setProfile:;
- (id)initWithCoder:;
- (unsigned int)profile;
- (void)setKey:;
- (void)encodeWithCoder:;
- (unsigned int)platform;
- (void).cxx_destruct;
- (void)setFaceprint:;
- (id)faceprint;
- (id)faceprintInputPath;
- (void)setFaceprintInputPath:;
+ (BOOL)supportsSecureCoding;
@end
