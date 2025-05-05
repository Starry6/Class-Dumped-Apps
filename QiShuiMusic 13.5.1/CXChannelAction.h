@interface CXChannelAction : CXAction
@property (nonatomic) NSUUID channelUUID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)archivedDataWithError:;
- (void).cxx_destruct;
- (id)customDescription;
- (id)copyWithZone:;
- (id)sanitizedCopyWithZone:;
- (void)updateSanitizedCopy:withZone:;
- (id)channelUUID;
- (id)initWithChannelUUID:;
+ (BOOL)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:error:;
@end
