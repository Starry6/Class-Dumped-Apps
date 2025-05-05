@interface EKVirtualConference : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSArray joinMethods;
@property (nonatomic) NSString conferenceDetails;
@property (nonatomic) NSString serializationBlockTitle;
@property (nonatomic) BOOL isWritable;
@property (nonatomic) Q source;
@property (nonatomic) NSURL firstPhoneNumber;
@property (nonatomic) NSURL urlWithAllowedScheme;
- (void)setTitle:;
- (BOOL)isWritable;
- (id)title;
- (void).cxx_destruct;
- (unsigned long long)source;
- (id)description;
- (void)setSource:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)joinMethods;
- (id)conferenceDetails;
- (void)setJoinMethods:;
- (void)setConferenceDetails:;
- (id)initWithTitle:joinMethods:conferenceDetails:;
- (id)firstPhoneNumber;
- (id)urlWithAllowedScheme;
- (id)serializationBlockTitle;
- (void)setSerializationBlockTitle:;
+ (void)virtualConferenceForRoomType:completion:queue:;
@end
