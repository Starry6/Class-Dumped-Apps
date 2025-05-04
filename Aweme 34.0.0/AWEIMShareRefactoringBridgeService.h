@interface AWEIMShareRefactoringBridgeService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)imShareTitleFontSize;
- (double)imShareGoodsTitleFontSize;
- (id)shareRiskWarningTextWithModel:fontSize:;
- (void)markShareModel:;
- (void)removeWithShareModel:completeBlock:;
+ (id)sharedInstance;
@end
