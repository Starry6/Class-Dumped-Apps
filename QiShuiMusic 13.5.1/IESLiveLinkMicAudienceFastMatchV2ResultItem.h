@interface IESLiveLinkMicAudienceFastMatchV2ResultItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoom room;
@property (nonatomic) BOOL hasRoom;
@property (nonatomic) HTSLiveUser anchor;
@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) IESLiveLinkMicAudienceFastMatchV2Tag tag;
@property (nonatomic) BOOL hasTag;
+ (id)descriptor;
@end
