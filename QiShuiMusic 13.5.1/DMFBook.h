@interface DMFBook : NSObject
@property (nonatomic) NSString persistentID;
@property (nonatomic) NSNumber iTunesStoreID;
@property (nonatomic) NSString author;
@property (nonatomic) NSString title;
@property (nonatomic) NSString version;
@property (nonatomic) Q type;
@property (nonatomic) Q state;
- (id)version;
- (id)author;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (id)title;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)persistentID;
- (id)initWithPersistentID:iTunesStoreID:author:title:version:type:state:;
- (id)iTunesStoreID;
+ (BOOL)supportsSecureCoding;
@end
