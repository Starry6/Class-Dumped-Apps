@interface TRIClientFactorPack : TRIPBMessage
@property (nonatomic) NSString factorPackId;
@property (nonatomic) BOOL hasFactorPackId;
@property (nonatomic) NSMutableArray factorLevelArray;
@property (nonatomic) Q factorLevelArray_Count;
@property (nonatomic) TRIClientSelectedNamespace selectedNamespace;
@property (nonatomic) BOOL hasSelectedNamespace;
+ (id)descriptor;
@end
