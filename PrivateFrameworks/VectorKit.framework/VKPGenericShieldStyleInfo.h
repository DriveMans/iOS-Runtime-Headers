/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShieldStyleInfo : PBCodable <NSCopying> {
    unsigned int  _backgroundColor;
    unsigned int  _borderColor;
    struct { 
        unsigned int backgroundColor : 1; 
        unsigned int borderColor : 1; 
        unsigned int style : 1; 
        unsigned int textColor : 1; 
        unsigned int textDropShadowColor : 1; 
        unsigned int textDropShadowSize : 1; 
        unsigned int textStrokeColor : 1; 
        unsigned int textStrokeSize : 1; 
    }  _has;
    int  _style;
    unsigned int  _textColor;
    unsigned int  _textDropShadowColor;
    struct { 
        float *list; 
        unsigned int count; 
        unsigned int size; 
    }  _textDropShadowOffsets;
    float  _textDropShadowSize;
    unsigned int  _textStrokeColor;
    float  _textStrokeSize;
}

@property (nonatomic) unsigned int backgroundColor;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBorderColor;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) BOOL hasTextColor;
@property (nonatomic) BOOL hasTextDropShadowColor;
@property (nonatomic) BOOL hasTextDropShadowSize;
@property (nonatomic) BOOL hasTextStrokeColor;
@property (nonatomic) BOOL hasTextStrokeSize;
@property (nonatomic) int style;
@property (nonatomic) unsigned int textColor;
@property (nonatomic) unsigned int textDropShadowColor;
@property (nonatomic, readonly) float*textDropShadowOffsets;
@property (nonatomic, readonly) unsigned int textDropShadowOffsetsCount;
@property (nonatomic) float textDropShadowSize;
@property (nonatomic) unsigned int textStrokeColor;
@property (nonatomic) float textStrokeSize;

- (void)addTextDropShadowOffset:(float)arg1;
- (unsigned int)backgroundColor;
- (unsigned int)borderColor;
- (void)clearTextDropShadowOffsets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBackgroundColor;
- (BOOL)hasBorderColor;
- (BOOL)hasStyle;
- (BOOL)hasTextColor;
- (BOOL)hasTextDropShadowColor;
- (BOOL)hasTextDropShadowSize;
- (BOOL)hasTextStrokeColor;
- (BOOL)hasTextStrokeSize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)setBorderColor:(unsigned int)arg1;
- (void)setHasBackgroundColor:(BOOL)arg1;
- (void)setHasBorderColor:(BOOL)arg1;
- (void)setHasStyle:(BOOL)arg1;
- (void)setHasTextColor:(BOOL)arg1;
- (void)setHasTextDropShadowColor:(BOOL)arg1;
- (void)setHasTextDropShadowSize:(BOOL)arg1;
- (void)setHasTextStrokeColor:(BOOL)arg1;
- (void)setHasTextStrokeSize:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setTextColor:(unsigned int)arg1;
- (void)setTextDropShadowColor:(unsigned int)arg1;
- (void)setTextDropShadowOffsets:(float*)arg1 count:(unsigned int)arg2;
- (void)setTextDropShadowSize:(float)arg1;
- (void)setTextStrokeColor:(unsigned int)arg1;
- (void)setTextStrokeSize:(float)arg1;
- (int)style;
- (unsigned int)textColor;
- (unsigned int)textDropShadowColor;
- (float)textDropShadowOffsetAtIndex:(unsigned int)arg1;
- (float*)textDropShadowOffsets;
- (unsigned int)textDropShadowOffsetsCount;
- (float)textDropShadowSize;
- (unsigned int)textStrokeColor;
- (float)textStrokeSize;
- (void)writeTo:(id)arg1;

@end
