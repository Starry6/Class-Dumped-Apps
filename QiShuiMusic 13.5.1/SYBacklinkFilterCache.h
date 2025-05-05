@interface SYBacklinkFilterCache : NSObject
@property (nonatomic) NSArray activityTypes;
@property (nonatomic) NSMutableArray entries;
@property (nonatomic) NSData data;
- (void)setEntries:;
- (id)data;
- (void)setActivityTypes:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)finalize;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)entries;
- (void)setData:;
- (BOOL)isEqual:;
- (id)activityTypes;
- (id)initWithActivityTypes:;
- (void)addEntriesForItem:;
- (BOOL)containsMatchingEntriesForItem:;
+ (BOOL)supportsSecureCoding;
@end
