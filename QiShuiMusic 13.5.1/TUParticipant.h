@interface TUParticipant : NSObject
@property (nonatomic) NSURL imageURL;
@property (nonatomic) NSString name;
@property (nonatomic) TUSandboxExtendedURL sandboxExtendedImageURL;
- (void)setName:;
- (id)initWithName:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)archivedDataWithError:;
- (id)initWithParticipant:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)mutableCopyWithZone:;
- (void)setImageURL:;
- (BOOL)isEqual:;
- (id)imageURL;
- (id)copyWithZone:;
- (BOOL)isEqualToParticipant:;
- (id)sandboxExtendedImageURL;
- (void)setSandboxExtendedImageURL:;
+ (BOOL)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:error:;
@end
