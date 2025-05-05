@interface CNPropertyFaceTimeAction : CNPropertyAction
@property (nonatomic) CNPropertyBestIDSValueQuery bestFaceTimeQuery;
@property (nonatomic) q type;
- (void)dealloc;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)canPerformAction;
- (void)performActionForItem:sender:;
- (id)initWithContact:propertyItems:;
- (void)_queryFaceTimeStatus;
- (void)queryComplete;
- (id)bestFaceTimeQuery;
- (void)setBestFaceTimeQuery:;
@end
