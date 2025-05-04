@interface AWEIMMessageEditInfo : NSObject
@property (nonatomic) BOOL isEdited;
@property (nonatomic) q editUid;
@property (nonatomic) q editTime;
@property (nonatomic) q editCount;
- (long long)editUid;
- (long long)editTime;
- (id)initWithIESMessage:;
- (long long)editCount;
- (void)setEditCount:;
- (id)initWithDict:;
- (id)getDict;
- (BOOL)isEdited;
@end
