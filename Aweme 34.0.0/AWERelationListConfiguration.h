@interface AWERelationListConfiguration : NSObject
- (BOOL)useCellHeightNewStyle;
- (BOOL)canceledAccountNotice;
- (BOOL)isNewRevert;
- (BOOL)isOldRevert;
- (BOOL)isRevertLibra;
- (id)init;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
