@interface HTSLiveLabelInfo : IESLivePBBaseMessage
@property (nonatomic) q labelType;
@property (nonatomic) q displayType;
@property (nonatomic) HTSLiveSpliceLabel spliceLabel;
@property (nonatomic) BOOL hasSpliceLabel;
@property (nonatomic) HTSLiveImage wholeLabel;
@property (nonatomic) BOOL hasWholeLabel;
@property (nonatomic) NSString extra;
@property (nonatomic) HTSLiveProfilePicSpliceLabel profilePicSpliceLabel;
@property (nonatomic) BOOL hasProfilePicSpliceLabel;
@property (nonatomic) NSMutableDictionary etExtra;
@property (nonatomic) Q etExtra_Count;
+ (id)descriptor;
@end
