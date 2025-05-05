@interface PSISynonym : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) Q category;
@property (nonatomic) Q owningGroupId;
@property (nonatomic) NSString identifier;
- (id)identifier;
- (unsigned long long)owningGroupId;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (unsigned long long)category;
- (id)copyWithZone:;
- (id)initWithText:category:owningGroupId:identifier:;
@end
