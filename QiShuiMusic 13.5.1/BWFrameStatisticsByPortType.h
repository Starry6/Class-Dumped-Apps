@interface BWFrameStatisticsByPortType : NSObject
@property (nonatomic) NSArray portTypes;
@property (nonatomic) Q frameCount;
- (unsigned long long)frameCount;
- (id)init;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithPortTypes:;
- (void)copyTo:;
- (void)encodeWithCoder:;
- (id)objectForKeyedSubscript:;
- (void)reset;
- (id)description;
- (void)updateWithFrameMetadata:updateFocusDistance:;
- (void)_setFrameCount:;
- (id)portTypes;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
