@interface PSICachedGroup : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q category;
@property (nonatomic) Q owningGroupId;
@property (nonatomic) Q groupId;
- (id)identifier;
- (unsigned long long)owningGroupId;
- (unsigned long long)hash;
- (unsigned long long)groupId;
- (void).cxx_destruct;
- (id)initWithText:identifier:category:owningGroupId:;
- (id)description;
- (void)setGroupId:;
- (id)text;
- (BOOL)isEqual:;
- (unsigned long long)category;
- (id)copyWithZone:;
@end
