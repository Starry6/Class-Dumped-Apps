@interface IESLiveSaaSPBLinkMicGuideMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q cueThreshold;
@property (nonatomic) q guidelineType;
@property (nonatomic) IESLiveSaaSPBLinkMicGuideMessage_FastMatchGuideline fastMatchGuideline;
@property (nonatomic) BOOL hasFastMatchGuideline;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) IESLiveSaaSPBCallToLinkmicContent callToLinkmicContent;
+ (id)descriptor;
@end
