@interface AWEIMCombineShareEditInfo : NSObject
@property (nonatomic) BOOL isEdited;
@property (nonatomic) q editUid;
@property (nonatomic) q editTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)editUid;
- (long long)editTime;
- (void)setEditUid:;
- (void)setEditTime:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithCoder:;
- (BOOL)isEdited;
- (void)setIsEdited:;
@end
