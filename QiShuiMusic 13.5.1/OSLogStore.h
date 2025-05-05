@interface OSLogStore : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)entriesEnumeratorWithOptions:position:predicate:error:;
- (id)initForFactory;
- (id)_constrainedEntriesEnumeratorWithOptions:position:predicate:error:;
- (id)entriesEnumeratorAndReturnError:;
- (id)positionWithDate:;
- (id)positionWithTimeIntervalSinceEnd:;
- (id)positionWithTimeIntervalSinceLatestBoot:;
+ (id)storeWithScope:error:;
+ (id)storeWithURL:error:;
@end
