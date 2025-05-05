@interface TMPasteboardChangeCountStore : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (id)hanleEvent:;
- (id)uniqueId;
+ (long long)lastPasteboardChangeCount:;
+ (void)syncPasteboardChangeCount:;
+ (id)cacheKey:;
@end
