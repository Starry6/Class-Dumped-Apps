@interface CNVCardPropertyItem : NSObject
@property (nonatomic) @ value;
@property (nonatomic) NSString label;
@property (nonatomic) NSString identifier;
- (id)identifier;
- (id)label;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)initWithValue:label:identifier:;
+ (id)itemWithValue:label:identifier:;
@end
