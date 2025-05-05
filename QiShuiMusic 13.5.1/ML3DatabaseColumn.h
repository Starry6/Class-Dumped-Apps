@interface ML3DatabaseColumn : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q datatype;
@property (nonatomic) Q columnConstraints;
@property (nonatomic) @ defaultValue;
- (id)defaultValue;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (unsigned long long)datatype;
- (id)initWithName:datatype:constraints:defaultValue:;
- (id)_columnDefinitionSQL;
- (unsigned long long)columnConstraints;
+ (id)columnWithName:datatype:constraints:defaultValue:;
@end
