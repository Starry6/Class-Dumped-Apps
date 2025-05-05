@interface NLPOIEntry : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) C category;
@property (nonatomic) float score;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (float)score;
- (id)name;
- (unsigned char)category;
- (id)initWithProtoBuf:;
@end
