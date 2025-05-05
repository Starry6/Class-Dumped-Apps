@interface IESLiveInnerPbRankListAwardMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q assetId;
@property (nonatomic) BOOL effectOpen;
@property (nonatomic) q rankType;
@property (nonatomic) q rank;
@property (nonatomic) NSString schemeURL;
+ (id)descriptor;
@end
