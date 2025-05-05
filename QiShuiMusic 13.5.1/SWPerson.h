@interface SWPerson : NSObject
@property (nonatomic) @ slPerson;
@property (nonatomic) NSData customThumbnailImageData;
@property (nonatomic) SWPersonIdentity identity;
- (void)setIdentity:;
- (id)identity;
- (id)contact;
- (id)handle;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)thumbnailImageData;
- (id)slPerson;
- (id)customThumbnailImageData;
- (id)initWithHandle:identity:displayName:thumbnailImageData:;
- (id)initWithHandle:displayName:thumbnailImageData:;
- (void)setSlPerson:;
+ (BOOL)supportsSecureCoding;
@end
