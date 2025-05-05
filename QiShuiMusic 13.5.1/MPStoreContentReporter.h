@interface MPStoreContentReporter : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)submitReport:completion:;
- (void)deleteComment:activityID:completion:;
- (void)deletePost:completion:;
- (void)_performWithBag:;
- (id)reportsForType:contentID:aucType:commentText:;
- (id)baseURLStringForReport;
- (id)_dictionariesForType:;
- (id)_reportConcernBagDictionary;
- (id)_deleteCommentURLComponentsFromBag:;
- (id)_deletePostURLComponentsFromBag:;
+ (id)sharedReporter;
@end
