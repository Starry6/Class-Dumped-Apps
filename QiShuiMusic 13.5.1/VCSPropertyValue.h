@interface VCSPropertyValue : NSObject
@property (nonatomic) Q valueType;
@property (nonatomic) @ value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)initWithValue:type:;
- (unsigned long long)valueType;
- (id)valueDescription;
- (id)dictify;
- (void)addParameter:withValue:;
@end
