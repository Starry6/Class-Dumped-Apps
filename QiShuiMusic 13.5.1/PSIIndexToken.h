@interface PSIIndexToken : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString identifier;
@property (nonatomic) s category;
@property (nonatomic) s owningCategory;
- (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (short)owningCategory;
- (id)text;
- (id)initWithText:identifier:category:owningCategory:;
- (short)category;
@end
