@interface PLTrip : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSArray items;
- (id)items;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)typeDescription;
- (double)duration;
- (id)initWithItems:type:;
@end
