@interface BMBookmarkNode : NSObject
@property (nonatomic) NSArray upstreams;
@property (nonatomic) <BMBookmark> value;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)upstreams;
- (id)init;
- (void)setName:;
- (void)setUpstreams:;
- (id)initWithCoder:;
- (id)descriptionAtLevel:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (id)initWithValue:upstreams:name:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)name;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
