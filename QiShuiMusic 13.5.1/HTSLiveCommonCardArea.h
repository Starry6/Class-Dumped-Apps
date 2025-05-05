@interface HTSLiveCommonCardArea : IESLivePBBaseMessage
@property (nonatomic) NSInteger domain;
@property (nonatomic) NSInteger type;
@property (nonatomic) I priority;
@property (nonatomic) NSInteger toolbarType;
@property (nonatomic) HTSLiveCombineType combineType;
@property (nonatomic) BOOL hasCombineType;
@property (nonatomic) NSInteger mockType;
@property (nonatomic) HTSLiveCommonCardDisplayInfo cardDisplayInfo;
@property (nonatomic) BOOL hasCardDisplayInfo;
@property (nonatomic) HTSLiveAnimConfig animConfig;
@property (nonatomic) BOOL hasAnimConfig;
@property (nonatomic) BOOL isPreloading;
+ (id)descriptor;
@end
