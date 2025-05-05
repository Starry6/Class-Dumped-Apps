@interface EKSerializableStructuredLocation : EKSerializableObject
@property (nonatomic) CalLocation calLocation;
- (void).cxx_destruct;
- (id)initWithStructuredLocation:;
- (id)createStructuredLocation;
- (id)calLocation;
- (void)setCalLocation:;
+ (id)classesForKey;
@end
