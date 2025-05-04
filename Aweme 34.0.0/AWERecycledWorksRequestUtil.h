@interface AWERecycledWorksRequestUtil : NSObject
+ (void)deleteRecycledWorksWithAwemeIDs:completion:;
+ (void)recoverRecycledWorksWithAwemeIDs:completion:;
+ (void)fetchRecycledWorksWithCursor:count:completion:;
+ (void)modifyRecycledWorksWithAwemeIDs:action:completion:;
+ (BOOL)validateAwemeIDs:completion:;
@end
