@interface HTSLiveVarietyShow : IESLivePBBaseMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) HTSLiveImage dynamicCover;
@property (nonatomic) BOOL hasDynamicCover;
@property (nonatomic) HTSLiveImage dynamicCoverLow;
@property (nonatomic) BOOL hasDynamicCoverLow;
@property (nonatomic) NSMutableArray seasonsArray;
@property (nonatomic) Q seasonsArray_Count;
@property (nonatomic) HTSLiveStatistics statistics;
@property (nonatomic) BOOL hasStatistics;
@property (nonatomic) HTSLiveUser owner;
@property (nonatomic) BOOL hasOwner;
+ (id)descriptor;
@end
