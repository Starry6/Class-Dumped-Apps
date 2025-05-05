@interface RivalsRecommendResponse_TabRivals : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray rivalsArray;
@property (nonatomic) Q rivalsArray_Count;
@property (nonatomic) Tab tab;
@property (nonatomic) BOOL hasTab;
@property (nonatomic) GPBInt64ObjectDictionary groupRivals;
@property (nonatomic) Q groupRivals_Count;
@property (nonatomic) NSInteger defaultGroup;
+ (id)descriptor;
@end
