@interface DOMProgressEvent : DOMEvent
@property (nonatomic) BOOL lengthComputable;
@property (nonatomic) Q loaded;
@property (nonatomic) Q total;
- (unsigned long long)loaded;
- (unsigned long long)total;
- (BOOL)lengthComputable;
@end
