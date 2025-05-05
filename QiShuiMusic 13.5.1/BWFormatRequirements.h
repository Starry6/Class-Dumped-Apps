@interface BWFormatRequirements : NSObject
@property (nonatomic) I mediaType;
- (unsigned int)mediaType;
- (id)init;
- (BOOL)isEmpty;
- (Class)formatClass;
@end
