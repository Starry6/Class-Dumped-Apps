@interface WBChangeRecord : NSObject
@property (nonatomic) WebBookmarkCollection collection;
@property (nonatomic) WebBookmark bookmark;
@property (nonatomic) NSInteger changeType;
@property (nonatomic) q localRecordGeneration;
- (id)collection;
- (int)changeType;
- (id)bookmark;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBookmarkCollection:bookmark:changeType:localRecordGeneration:;
- (id)_changeTypeDescription;
- (id)_changedAttributeDescription;
- (long long)localRecordGeneration;
@end
