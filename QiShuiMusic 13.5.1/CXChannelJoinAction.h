@interface CXChannelJoinAction : CXChannelAction
@property (nonatomic) CXChannelUpdate channelUpdate;
@property (nonatomic) NSURL imageURL;
@property (nonatomic) NSString name;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)archivedDataWithError:;
- (void).cxx_destruct;
- (id)name;
- (void)setImageURL:;
- (id)imageURL;
- (void)updateSanitizedCopy:withZone:;
- (id)channelUpdate;
- (id)initWithChannelUUID:name:;
+ (BOOL)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:error:;
@end
