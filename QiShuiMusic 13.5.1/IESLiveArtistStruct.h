@interface IESLiveArtistStruct : IESLivePBBaseMessage
@property (nonatomic) q artistId;
@property (nonatomic) NSString defaultName;
@property (nonatomic) BOOL asRecently;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
+ (id)descriptor;
@end
