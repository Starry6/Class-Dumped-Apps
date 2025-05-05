@interface HTSLiveGiftIconFlashMessage : IESLivePBBaseMessage
@property (nonatomic) NSArray mixUserIdsArray;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray openIdsArray;
@property (nonatomic) Q openIdsArray_Count;
@property (nonatomic) q recommendTime;
@property (nonatomic) q notFlashAfter;
- (id)mixUserIdsArray;
+ (id)descriptor;
@end
