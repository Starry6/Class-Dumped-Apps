@interface IESLiveKaraokeFeedItem : IESLivePBBaseMessage
@property (nonatomic) IESLiveKaraokeAwemeStruct awemeStruct;
@property (nonatomic) BOOL hasAwemeStruct;
+ (id)descriptor;
@end
