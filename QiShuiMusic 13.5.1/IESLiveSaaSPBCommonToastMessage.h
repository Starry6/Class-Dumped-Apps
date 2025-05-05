@interface IESLiveSaaSPBCommonToastMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) BOOL discardable;
@property (nonatomic) BOOL immediate;
@property (nonatomic) q duration;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString backgroundColorStart;
@property (nonatomic) NSString backgroundColorEnd;
@property (nonatomic) q position;
@property (nonatomic) IESLiveSaaSPBImage topImg;
@property (nonatomic) BOOL hasTopImg;
@property (nonatomic) q topImgWidth;
@property (nonatomic) q topImgHeight;
@property (nonatomic) BOOL showMongoliaLayer;
+ (id)descriptor;
@end
